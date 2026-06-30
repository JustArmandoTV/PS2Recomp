#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016ED70
// Address: 0x16ed70 - 0x16eee0
void sub_0016ED70_0x16ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ED70_0x16ed70");
#endif

    switch (ctx->pc) {
        case 0x16edb8u: goto label_16edb8;
        case 0x16ee00u: goto label_16ee00;
        case 0x16ee0cu: goto label_16ee0c;
        case 0x16ee1cu: goto label_16ee1c;
        case 0x16ee40u: goto label_16ee40;
        case 0x16ee5cu: goto label_16ee5c;
        case 0x16ee70u: goto label_16ee70;
        case 0x16ee9cu: goto label_16ee9c;
        default: break;
    }

    ctx->pc = 0x16ed70u;

    // 0x16ed70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ed74: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x16ed78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16ed7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16ed7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16ed84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16ed84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16ed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16ed8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16ed8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ed94: 0x24e32398  addiu       $v1, $a3, 0x2398
    ctx->pc = 0x16ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 9112));
    // 0x16ed98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ed9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eda0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16eda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16eda4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16eda8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x16eda8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16edac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16EDACu;
    {
        const bool branch_taken_0x16edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDACu;
            // 0x16edb0: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edac) {
            ctx->pc = 0x16EDDCu;
            goto label_16eddc;
        }
    }
    ctx->pc = 0x16EDB4u;
    // 0x16edb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16edb8:
    // 0x16edb8: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x16edb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16edbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EDBCu;
    {
        const bool branch_taken_0x16edbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDBCu;
            // 0x16edc0: 0x246300ac  addiu       $v1, $v1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edbc) {
            ctx->pc = 0x16EDDCu;
            goto label_16eddc;
        }
    }
    ctx->pc = 0x16EDC4u;
    // 0x16edc4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x16edc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16edc8: 0x0  nop
    ctx->pc = 0x16edc8u;
    // NOP
    // 0x16edcc: 0x0  nop
    ctx->pc = 0x16edccu;
    // NOP
    // 0x16edd0: 0x0  nop
    ctx->pc = 0x16edd0u;
    // NOP
    // 0x16edd4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16EDD4u;
    {
        const bool branch_taken_0x16edd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16edd4) {
            ctx->pc = 0x16EDD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDD4u;
            // 0x16edd8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16EDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16edb8;
        }
    }
    ctx->pc = 0x16EDDCu;
label_16eddc:
    // 0x16eddc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x16eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16ede0: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x16EDE0u;
    {
        const bool branch_taken_0x16ede0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16EDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDE0u;
            // 0x16ede4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ede0) {
            ctx->pc = 0x16EEB8u;
            goto label_16eeb8;
        }
    }
    ctx->pc = 0x16EDE8u;
    // 0x16ede8: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x16ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x16edec: 0x24e32398  addiu       $v1, $a3, 0x2398
    ctx->pc = 0x16edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 9112));
    // 0x16edf0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x16edf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16edf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16edf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edf8: 0xc06188e  jal         func_186238
    ctx->pc = 0x16EDF8u;
    SET_GPR_U32(ctx, 31, 0x16EE00u);
    ctx->pc = 0x16EDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EDF8u;
            // 0x16edfc: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186238u;
    if (runtime->hasFunction(0x186238u)) {
        auto targetFn = runtime->lookupFunction(0x186238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE00u; }
        if (ctx->pc != 0x16EE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186238_0x186238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE00u; }
        if (ctx->pc != 0x16EE00u) { return; }
    }
    ctx->pc = 0x16EE00u;
label_16ee00:
    // 0x16ee00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee04: 0xc061890  jal         func_186240
    ctx->pc = 0x16EE04u;
    SET_GPR_U32(ctx, 31, 0x16EE0Cu);
    ctx->pc = 0x16EE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE04u;
            // 0x16ee08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186240u;
    if (runtime->hasFunction(0x186240u)) {
        auto targetFn = runtime->lookupFunction(0x186240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE0Cu; }
        if (ctx->pc != 0x16EE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186240_0x186240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE0Cu; }
        if (ctx->pc != 0x16EE0Cu) { return; }
    }
    ctx->pc = 0x16EE0Cu;
label_16ee0c:
    // 0x16ee0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee10: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x16ee10u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x16ee14: 0xc061892  jal         func_186248
    ctx->pc = 0x16EE14u;
    SET_GPR_U32(ctx, 31, 0x16EE1Cu);
    ctx->pc = 0x16EE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE14u;
            // 0x16ee18: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186248u;
    if (runtime->hasFunction(0x186248u)) {
        auto targetFn = runtime->lookupFunction(0x186248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE1Cu; }
        if (ctx->pc != 0x16EE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186248_0x186248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE1Cu; }
        if (ctx->pc != 0x16EE1Cu) { return; }
    }
    ctx->pc = 0x16EE1Cu;
label_16ee1c:
    // 0x16ee1c: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x16ee1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x16ee20: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x16ee20u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x16ee24: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16ee24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ee28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16ee28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee2c: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x16ee2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x16ee30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ee34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee38: 0xc0591de  jal         func_164778
    ctx->pc = 0x16EE38u;
    SET_GPR_U32(ctx, 31, 0x16EE40u);
    ctx->pc = 0x16EE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE38u;
            // 0x16ee3c: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164778u;
    if (runtime->hasFunction(0x164778u)) {
        auto targetFn = runtime->lookupFunction(0x164778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE40u; }
        if (ctx->pc != 0x16EE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164778_0x164778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE40u; }
        if (ctx->pc != 0x16EE40u) { return; }
    }
    ctx->pc = 0x16EE40u;
label_16ee40:
    // 0x16ee40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee44: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16EE44u;
    {
        const bool branch_taken_0x16ee44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE44u;
            // 0x16ee48: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee44) {
            ctx->pc = 0x16EEB8u;
            goto label_16eeb8;
        }
    }
    ctx->pc = 0x16EE4Cu;
    // 0x16ee4c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16ee50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16ee50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee54: 0xc05937c  jal         func_164DF0
    ctx->pc = 0x16EE54u;
    SET_GPR_U32(ctx, 31, 0x16EE5Cu);
    ctx->pc = 0x16EE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE54u;
            // 0x16ee58: 0x24a5f370  addiu       $a1, $a1, -0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164DF0u;
    if (runtime->hasFunction(0x164DF0u)) {
        auto targetFn = runtime->lookupFunction(0x164DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE5Cu; }
        if (ctx->pc != 0x16EE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164DF0_0x164df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE5Cu; }
        if (ctx->pc != 0x16EE5Cu) { return; }
    }
    ctx->pc = 0x16EE5Cu;
label_16ee5c:
    // 0x16ee5c: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x16ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x16ee60: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x16ee60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x16ee64: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x16EE64u;
    {
        const bool branch_taken_0x16ee64 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE64u;
            // 0x16ee68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee64) {
            ctx->pc = 0x16EE90u;
            goto label_16ee90;
        }
    }
    ctx->pc = 0x16EE6Cu;
    // 0x16ee6c: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_16ee70:
    // 0x16ee70: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16ee74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16ee78: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x16ee7c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ee80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ee84: 0xd3282a  slt         $a1, $a2, $s3
    ctx->pc = 0x16ee84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16ee88: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16EE88u;
    {
        const bool branch_taken_0x16ee88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE88u;
            // 0x16ee8c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee88) {
            ctx->pc = 0x16EE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ee70;
        }
    }
    ctx->pc = 0x16EE90u;
label_16ee90:
    // 0x16ee90: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x16ee90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ee94: 0xc05bb4c  jal         func_16ED30
    ctx->pc = 0x16EE94u;
    SET_GPR_U32(ctx, 31, 0x16EE9Cu);
    ctx->pc = 0x16EE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE94u;
            // 0x16ee98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ED30u;
    if (runtime->hasFunction(0x16ED30u)) {
        auto targetFn = runtime->lookupFunction(0x16ED30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE9Cu; }
        if (ctx->pc != 0x16EE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ED30_0x16ed30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE9Cu; }
        if (ctx->pc != 0x16EE9Cu) { return; }
    }
    ctx->pc = 0x16EE9Cu;
label_16ee9c:
    // 0x16ee9c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x16ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x16eea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16eea4: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x16eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x16eea8: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x16eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x16eeac: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x16eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x16eeb0: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x16eeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16eeb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16eeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16eeb8:
    // 0x16eeb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16eeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16eebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16eec0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16eec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16eec4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16eec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16eec8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16eec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16eecc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16eeccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16eed0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16eed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16eed4: 0x3e00008  jr          $ra
    ctx->pc = 0x16EED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EED4u;
            // 0x16eed8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EEDCu;
    // 0x16eedc: 0x0  nop
    ctx->pc = 0x16eedcu;
    // NOP
}
