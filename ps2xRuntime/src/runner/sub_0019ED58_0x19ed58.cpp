#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019ED58
// Address: 0x19ed58 - 0x19f040
void sub_0019ED58_0x19ed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ED58_0x19ed58");
#endif

    switch (ctx->pc) {
        case 0x19ed90u: goto label_19ed90;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee18u: goto label_19ee18;
        case 0x19ee34u: goto label_19ee34;
        case 0x19ee48u: goto label_19ee48;
        case 0x19ee5cu: goto label_19ee5c;
        case 0x19ee6cu: goto label_19ee6c;
        case 0x19eeb0u: goto label_19eeb0;
        case 0x19eec8u: goto label_19eec8;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19ef0cu: goto label_19ef0c;
        case 0x19ef1cu: goto label_19ef1c;
        case 0x19ef5cu: goto label_19ef5c;
        case 0x19eff0u: goto label_19eff0;
        case 0x19f00cu: goto label_19f00c;
        default: break;
    }

    ctx->pc = 0x19ed58u;

    // 0x19ed58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ed5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ed60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ed64: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19ED64u;
    {
        const bool branch_taken_0x19ed64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED64u;
            // 0x19ed68: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed64) {
            ctx->pc = 0x19ED80u;
            goto label_19ed80;
        }
    }
    ctx->pc = 0x19ED6Cu;
    // 0x19ed6c: 0x10900009  beq         $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19ED6Cu;
    {
        const bool branch_taken_0x19ed6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x19ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED6Cu;
            // 0x19ed70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed6c) {
            ctx->pc = 0x19ED94u;
            goto label_19ed94;
        }
    }
    ctx->pc = 0x19ED74u;
    // 0x19ed74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19ED74u;
    {
        const bool branch_taken_0x19ed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED74u;
            // 0x19ed78: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed74) {
            ctx->pc = 0x19ED88u;
            goto label_19ed88;
        }
    }
    ctx->pc = 0x19ED7Cu;
    // 0x19ed7c: 0x0  nop
    ctx->pc = 0x19ed7cu;
    // NOP
label_19ed80:
    // 0x19ed80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ED80u;
    {
        const bool branch_taken_0x19ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED80u;
            // 0x19ed84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed80) {
            ctx->pc = 0x19ED90u;
            goto label_19ed90;
        }
    }
    ctx->pc = 0x19ED88u;
label_19ed88:
    // 0x19ed88: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19ED88u;
    SET_GPR_U32(ctx, 31, 0x19ED90u);
    ctx->pc = 0x19ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED88u;
            // 0x19ed8c: 0x24849eb0  addiu       $a0, $a0, -0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED90u; }
        if (ctx->pc != 0x19ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED90u; }
        if (ctx->pc != 0x19ED90u) { return; }
    }
    ctx->pc = 0x19ED90u;
label_19ed90:
    // 0x19ed90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ed90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed94:
    // 0x19ed94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ed94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ed98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19ed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x19ED9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED9Cu;
            // 0x19eda0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EDA4u;
    // 0x19eda4: 0x0  nop
    ctx->pc = 0x19eda4u;
    // NOP
    // 0x19eda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19edac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19edacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19edb0: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19edb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19edb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19edb8: 0x806fa04  j           func_1BE810
    ctx->pc = 0x19EDB8u;
    ctx->pc = 0x19EDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDB8u;
            // 0x19edbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE810u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19EDC0u;
    // 0x19edc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19edc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19edc8: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19edcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19edccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19edd0: 0x806fa18  j           func_1BE860
    ctx->pc = 0x19EDD0u;
    ctx->pc = 0x19EDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDD0u;
            // 0x19edd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE860u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19EDD8u;
    // 0x19edd8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19edd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19eddc: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x19eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x19ede0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ede0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ede4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x19ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x19ede8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ede8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19edec: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x19edecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x19edf0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x19edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x19edf4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x19edf8: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19EDF8u;
    SET_GPR_U32(ctx, 31, 0x19EE00u);
    ctx->pc = 0x19EDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDF8u;
            // 0x19edfc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE00u; }
        if (ctx->pc != 0x19EE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE00u; }
        if (ctx->pc != 0x19EE00u) { return; }
    }
    ctx->pc = 0x19EE00u;
label_19ee00:
    // 0x19ee00: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19ee04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ee08: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EE08u;
    {
        const bool branch_taken_0x19ee08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE08u;
            // 0x19ee0c: 0x24849ed0  addiu       $a0, $a0, -0x6130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee08) {
            ctx->pc = 0x19EE20u;
            goto label_19ee20;
        }
    }
    ctx->pc = 0x19EE10u;
    // 0x19ee10: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19EE10u;
    SET_GPR_U32(ctx, 31, 0x19EE18u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE18u; }
        if (ctx->pc != 0x19EE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE18u; }
        if (ctx->pc != 0x19EE18u) { return; }
    }
    ctx->pc = 0x19EE18u;
label_19ee18:
    // 0x19ee18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19EE18u;
    {
        const bool branch_taken_0x19ee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE18u;
            // 0x19ee1c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee18) {
            ctx->pc = 0x19EE70u;
            goto label_19ee70;
        }
    }
    ctx->pc = 0x19EE20u;
label_19ee20:
    // 0x19ee20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ee24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EE24u;
    {
        const bool branch_taken_0x19ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE24u;
            // 0x19ee28: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee24) {
            ctx->pc = 0x19EE40u;
            goto label_19ee40;
        }
    }
    ctx->pc = 0x19EE2Cu;
    // 0x19ee2c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19EE2Cu;
    SET_GPR_U32(ctx, 31, 0x19EE34u);
    ctx->pc = 0x19EE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE2Cu;
            // 0x19ee30: 0x24849f00  addiu       $a0, $a0, -0x6100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE34u; }
        if (ctx->pc != 0x19EE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE34u; }
        if (ctx->pc != 0x19EE34u) { return; }
    }
    ctx->pc = 0x19EE34u;
label_19ee34:
    // 0x19ee34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19EE34u;
    {
        const bool branch_taken_0x19ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE34u;
            // 0x19ee38: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee34) {
            ctx->pc = 0x19EE70u;
            goto label_19ee70;
        }
    }
    ctx->pc = 0x19EE3Cu;
    // 0x19ee3c: 0x0  nop
    ctx->pc = 0x19ee3cu;
    // NOP
label_19ee40:
    // 0x19ee40: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19EE40u;
    SET_GPR_U32(ctx, 31, 0x19EE48u);
    ctx->pc = 0x19EE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE40u;
            // 0x19ee44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE48u; }
        if (ctx->pc != 0x19EE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE48u; }
        if (ctx->pc != 0x19EE48u) { return; }
    }
    ctx->pc = 0x19EE48u;
label_19ee48:
    // 0x19ee48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19ee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ee50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee54: 0xc067a16  jal         func_19E858
    ctx->pc = 0x19EE54u;
    SET_GPR_U32(ctx, 31, 0x19EE5Cu);
    ctx->pc = 0x19EE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE54u;
            // 0x19ee58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E858u;
    if (runtime->hasFunction(0x19E858u)) {
        auto targetFn = runtime->lookupFunction(0x19E858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE5Cu; }
        if (ctx->pc != 0x19EE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E858_0x19e858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE5Cu; }
        if (ctx->pc != 0x19EE5Cu) { return; }
    }
    ctx->pc = 0x19EE5Cu;
label_19ee5c:
    // 0x19ee5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ee5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee64: 0xc06fdaa  jal         func_1BF6A8
    ctx->pc = 0x19EE64u;
    SET_GPR_U32(ctx, 31, 0x19EE6Cu);
    ctx->pc = 0x19EE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE64u;
            // 0x19ee68: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF6A8u;
    if (runtime->hasFunction(0x1BF6A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BF6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE6Cu; }
        if (ctx->pc != 0x19EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF6A8_0x1bf6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE6Cu; }
        if (ctx->pc != 0x19EE6Cu) { return; }
    }
    ctx->pc = 0x19EE6Cu;
label_19ee6c:
    // 0x19ee6c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x19ee6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19ee70:
    // 0x19ee70: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x19ee70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19ee74: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x19ee74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19ee78: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x19ee78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19ee7c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19ee7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE80u;
            // 0x19ee84: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EE88u;
    // 0x19ee88: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19ee8c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x19ee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x19ee90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ee90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee94: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x19ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x19ee98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ee98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee9c: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x19ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x19eea0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x19eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x19eea4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x19eea8: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19EEA8u;
    SET_GPR_U32(ctx, 31, 0x19EEB0u);
    ctx->pc = 0x19EEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEA8u;
            // 0x19eeac: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEB0u; }
        if (ctx->pc != 0x19EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEB0u; }
        if (ctx->pc != 0x19EEB0u) { return; }
    }
    ctx->pc = 0x19EEB0u;
label_19eeb0:
    // 0x19eeb0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19eeb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eeb8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EEB8u;
    {
        const bool branch_taken_0x19eeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEB8u;
            // 0x19eebc: 0x24849f30  addiu       $a0, $a0, -0x60D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eeb8) {
            ctx->pc = 0x19EED0u;
            goto label_19eed0;
        }
    }
    ctx->pc = 0x19EEC0u;
    // 0x19eec0: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19EEC0u;
    SET_GPR_U32(ctx, 31, 0x19EEC8u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEC8u; }
        if (ctx->pc != 0x19EEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEC8u; }
        if (ctx->pc != 0x19EEC8u) { return; }
    }
    ctx->pc = 0x19EEC8u;
label_19eec8:
    // 0x19eec8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19EEC8u;
    {
        const bool branch_taken_0x19eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEC8u;
            // 0x19eecc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eec8) {
            ctx->pc = 0x19EF20u;
            goto label_19ef20;
        }
    }
    ctx->pc = 0x19EED0u;
label_19eed0:
    // 0x19eed0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19eed4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EED4u;
    {
        const bool branch_taken_0x19eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EED4u;
            // 0x19eed8: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eed4) {
            ctx->pc = 0x19EEF0u;
            goto label_19eef0;
        }
    }
    ctx->pc = 0x19EEDCu;
    // 0x19eedc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19EEDCu;
    SET_GPR_U32(ctx, 31, 0x19EEE4u);
    ctx->pc = 0x19EEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEDCu;
            // 0x19eee0: 0x24849f60  addiu       $a0, $a0, -0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEE4u; }
        if (ctx->pc != 0x19EEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEE4u; }
        if (ctx->pc != 0x19EEE4u) { return; }
    }
    ctx->pc = 0x19EEE4u;
label_19eee4:
    // 0x19eee4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19EEE4u;
    {
        const bool branch_taken_0x19eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEE4u;
            // 0x19eee8: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eee4) {
            ctx->pc = 0x19EF20u;
            goto label_19ef20;
        }
    }
    ctx->pc = 0x19EEECu;
    // 0x19eeec: 0x0  nop
    ctx->pc = 0x19eeecu;
    // NOP
label_19eef0:
    // 0x19eef0: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19EEF0u;
    SET_GPR_U32(ctx, 31, 0x19EEF8u);
    ctx->pc = 0x19EEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EEF0u;
            // 0x19eef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEF8u; }
        if (ctx->pc != 0x19EEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEF8u; }
        if (ctx->pc != 0x19EEF8u) { return; }
    }
    ctx->pc = 0x19EEF8u;
label_19eef8:
    // 0x19eef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19eef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eefc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19eefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef00: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ef00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef04: 0xc067a16  jal         func_19E858
    ctx->pc = 0x19EF04u;
    SET_GPR_U32(ctx, 31, 0x19EF0Cu);
    ctx->pc = 0x19EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF04u;
            // 0x19ef08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E858u;
    if (runtime->hasFunction(0x19E858u)) {
        auto targetFn = runtime->lookupFunction(0x19E858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF0Cu; }
        if (ctx->pc != 0x19EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E858_0x19e858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF0Cu; }
        if (ctx->pc != 0x19EF0Cu) { return; }
    }
    ctx->pc = 0x19EF0Cu;
label_19ef0c:
    // 0x19ef0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ef0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef14: 0xc06fdd2  jal         func_1BF748
    ctx->pc = 0x19EF14u;
    SET_GPR_U32(ctx, 31, 0x19EF1Cu);
    ctx->pc = 0x19EF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF14u;
            // 0x19ef18: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF748u;
    if (runtime->hasFunction(0x1BF748u)) {
        auto targetFn = runtime->lookupFunction(0x1BF748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF1Cu; }
        if (ctx->pc != 0x19EF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF748_0x1bf748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF1Cu; }
        if (ctx->pc != 0x19EF1Cu) { return; }
    }
    ctx->pc = 0x19EF1Cu;
label_19ef1c:
    // 0x19ef1c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x19ef1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19ef20:
    // 0x19ef20: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x19ef20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19ef24: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x19ef24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19ef28: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x19ef28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19ef2c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19ef2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19ef30: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF30u;
            // 0x19ef34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EF38u;
    // 0x19ef38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ef3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ef40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19ef40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ef48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ef48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19ef50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19ef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19ef54: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19EF54u;
    SET_GPR_U32(ctx, 31, 0x19EF5Cu);
    ctx->pc = 0x19EF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF54u;
            // 0x19ef58: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF5Cu; }
        if (ctx->pc != 0x19EF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF5Cu; }
        if (ctx->pc != 0x19EF5Cu) { return; }
    }
    ctx->pc = 0x19EF5Cu;
label_19ef5c:
    // 0x19ef5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ef60: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EF60u;
    {
        const bool branch_taken_0x19ef60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19EF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF60u;
            // 0x19ef64: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef60) {
            ctx->pc = 0x19EF88u;
            goto label_19ef88;
        }
    }
    ctx->pc = 0x19EF68u;
    // 0x19ef68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ef68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ef6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ef6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ef70: 0x24849f90  addiu       $a0, $a0, -0x6070
    ctx->pc = 0x19ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942608));
    // 0x19ef74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19ef74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ef78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ef7c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19EF7Cu;
    ctx->pc = 0x19EF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF7Cu;
            // 0x19ef80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19EF84u;
    // 0x19ef84: 0x0  nop
    ctx->pc = 0x19ef84u;
    // NOP
label_19ef88:
    // 0x19ef88: 0x8e2203f0  lw          $v0, 0x3F0($s1)
    ctx->pc = 0x19ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x19ef8c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x19EF8Cu;
    {
        const bool branch_taken_0x19ef8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef8c) {
            ctx->pc = 0x19EF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF8Cu;
            // 0x19ef90: 0xae320058  sw          $s2, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19EFE8u;
            goto label_19efe8;
        }
    }
    ctx->pc = 0x19EF94u;
    // 0x19ef94: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x19ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x19ef98: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EF98u;
    {
        const bool branch_taken_0x19ef98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF98u;
            // 0x19ef9c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef98) {
            ctx->pc = 0x19EFC0u;
            goto label_19efc0;
        }
    }
    ctx->pc = 0x19EFA0u;
    // 0x19efa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19efa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19efa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19efa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19efa8: 0x24849fc0  addiu       $a0, $a0, -0x6040
    ctx->pc = 0x19efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942656));
    // 0x19efac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19efacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19efb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19efb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19efb4: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19EFB4u;
    ctx->pc = 0x19EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFB4u;
            // 0x19efb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19EFBCu;
    // 0x19efbc: 0x0  nop
    ctx->pc = 0x19efbcu;
    // NOP
label_19efc0:
    // 0x19efc0: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EFC0u;
    {
        const bool branch_taken_0x19efc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efc0) {
            ctx->pc = 0x19EFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFC0u;
            // 0x19efc4: 0xae320058  sw          $s2, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19EFE8u;
            goto label_19efe8;
        }
    }
    ctx->pc = 0x19EFC8u;
    // 0x19efc8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19efcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19efccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19efd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19efd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19efd4: 0x2484a008  addiu       $a0, $a0, -0x5FF8
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942728));
    // 0x19efd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19efd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19efdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19efdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19efe0: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19EFE0u;
    ctx->pc = 0x19EFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFE0u;
            // 0x19efe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19EFE8u;
label_19efe8:
    // 0x19efe8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x19EFE8u;
    SET_GPR_U32(ctx, 31, 0x19EFF0u);
    ctx->pc = 0x19EFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFE8u;
            // 0x19efec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D6C0u;
    if (runtime->hasFunction(0x19D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFF0u; }
        if (ctx->pc != 0x19EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D6C0_0x19d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFF0u; }
        if (ctx->pc != 0x19EFF0u) { return; }
    }
    ctx->pc = 0x19EFF0u;
label_19eff0:
    // 0x19eff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19eff4: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19EFF4u;
    {
        const bool branch_taken_0x19eff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19eff4) {
            ctx->pc = 0x19EFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFF4u;
            // 0x19eff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F020u;
            goto label_19f020;
        }
    }
    ctx->pc = 0x19EFFCu;
    // 0x19effc: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19EFFCu;
    {
        const bool branch_taken_0x19effc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x19effc) {
            ctx->pc = 0x19F000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFFCu;
            // 0x19f000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F020u;
            goto label_19f020;
        }
    }
    ctx->pc = 0x19F004u;
    // 0x19f004: 0xc0669a0  jal         func_19A680
    ctx->pc = 0x19F004u;
    SET_GPR_U32(ctx, 31, 0x19F00Cu);
    ctx->pc = 0x19F008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F004u;
            // 0x19f008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A680u;
    if (runtime->hasFunction(0x19A680u)) {
        auto targetFn = runtime->lookupFunction(0x19A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F00Cu; }
        if (ctx->pc != 0x19F00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A680_0x19a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F00Cu; }
        if (ctx->pc != 0x19F00Cu) { return; }
    }
    ctx->pc = 0x19F00Cu;
label_19f00c:
    // 0x19f00c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19f010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f014: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x19f014u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x19f018: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x19f018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x19f01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f020:
    // 0x19f020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19f024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f02c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f030: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19f030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f034: 0x8067c10  j           func_19F040
    ctx->pc = 0x19F034u;
    ctx->pc = 0x19F038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F034u;
            // 0x19f038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F040u;
    if (runtime->hasFunction(0x19F040u)) {
        auto targetFn = runtime->lookupFunction(0x19F040u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019F040_0x19f040(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F03Cu;
    // 0x19f03c: 0x0  nop
    ctx->pc = 0x19f03cu;
    // NOP
}
