#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFE28
// Address: 0x1bfe28 - 0x1c0220
void sub_001BFE28_0x1bfe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFE28_0x1bfe28");
#endif

    switch (ctx->pc) {
        case 0x1bfe58u: goto label_1bfe58;
        case 0x1bfe98u: goto label_1bfe98;
        case 0x1bfeb4u: goto label_1bfeb4;
        case 0x1bfef8u: goto label_1bfef8;
        case 0x1bff1cu: goto label_1bff1c;
        case 0x1bff3cu: goto label_1bff3c;
        case 0x1bff88u: goto label_1bff88;
        case 0x1bffacu: goto label_1bffac;
        case 0x1bfff8u: goto label_1bfff8;
        case 0x1c0078u: goto label_1c0078;
        case 0x1c00f8u: goto label_1c00f8;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c0208u: goto label_1c0208;
        default: break;
    }

    ctx->pc = 0x1bfe28u;

    // 0x1bfe28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfe2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFE2Cu;
    {
        const bool branch_taken_0x1bfe2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE2Cu;
            // 0x1bfe30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe2c) {
            ctx->pc = 0x1BFE3Cu;
            goto label_1bfe3c;
        }
    }
    ctx->pc = 0x1BFE34u;
    // 0x1bfe34: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFE34u;
    {
        const bool branch_taken_0x1bfe34 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1BFE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE34u;
            // 0x1bfe38: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe34) {
            ctx->pc = 0x1BFE48u;
            goto label_1bfe48;
        }
    }
    ctx->pc = 0x1BFE3Cu;
label_1bfe3c:
    // 0x1bfe3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFE3Cu;
    {
        const bool branch_taken_0x1bfe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE3Cu;
            // 0x1bfe40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe3c) {
            ctx->pc = 0x1BFE5Cu;
            goto label_1bfe5c;
        }
    }
    ctx->pc = 0x1BFE44u;
    // 0x1bfe44: 0x0  nop
    ctx->pc = 0x1bfe44u;
    // NOP
label_1bfe48:
    // 0x1bfe48: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x1bfe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x1bfe4c: 0x24a5b7d0  addiu       $a1, $a1, -0x4830
    ctx->pc = 0x1bfe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948816));
    // 0x1bfe50: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1BFE50u;
    SET_GPR_U32(ctx, 31, 0x1BFE58u);
    ctx->pc = 0x1BFE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE50u;
            // 0x1bfe54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE58u; }
        if (ctx->pc != 0x1BFE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE58u; }
        if (ctx->pc != 0x1BFE58u) { return; }
    }
    ctx->pc = 0x1BFE58u;
label_1bfe58:
    // 0x1bfe58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfe58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bfe5c:
    // 0x1bfe5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfe60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE60u;
            // 0x1bfe64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFE68u;
    // 0x1bfe68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfe6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1bfe6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bfe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bfe74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bfe74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFE78u;
    {
        const bool branch_taken_0x1bfe78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE78u;
            // 0x1bfe7c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe78) {
            ctx->pc = 0x1BFE88u;
            goto label_1bfe88;
        }
    }
    ctx->pc = 0x1BFE80u;
    // 0x1bfe80: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFE80u;
    {
        const bool branch_taken_0x1bfe80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bfe80) {
            ctx->pc = 0x1BFE90u;
            goto label_1bfe90;
        }
    }
    ctx->pc = 0x1BFE88u;
label_1bfe88:
    // 0x1bfe88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BFE88u;
    {
        const bool branch_taken_0x1bfe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE88u;
            // 0x1bfe8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe88) {
            ctx->pc = 0x1BFEB8u;
            goto label_1bfeb8;
        }
    }
    ctx->pc = 0x1BFE90u;
label_1bfe90:
    // 0x1bfe90: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BFE90u;
    SET_GPR_U32(ctx, 31, 0x1BFE98u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE98u; }
        if (ctx->pc != 0x1BFE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDA0_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE98u; }
        if (ctx->pc != 0x1BFE98u) { return; }
    }
    ctx->pc = 0x1BFE98u;
label_1bfe98:
    // 0x1bfe98: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bfe98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bfe9c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1bfe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1bfea0: 0x24a5b7e8  addiu       $a1, $a1, -0x4818
    ctx->pc = 0x1bfea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948840));
    // 0x1bfea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFEA4u;
    {
        const bool branch_taken_0x1bfea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEA4u;
            // 0x1bfea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfea4) {
            ctx->pc = 0x1BFEB8u;
            goto label_1bfeb8;
        }
    }
    ctx->pc = 0x1BFEACu;
    // 0x1bfeac: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1BFEACu;
    SET_GPR_U32(ctx, 31, 0x1BFEB4u);
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEB4u; }
        if (ctx->pc != 0x1BFEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEB4u; }
        if (ctx->pc != 0x1BFEB4u) { return; }
    }
    ctx->pc = 0x1BFEB4u;
label_1bfeb4:
    // 0x1bfeb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfeb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bfeb8:
    // 0x1bfeb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bfeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfebc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bfebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bfec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEC0u;
            // 0x1bfec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFEC8u;
    // 0x1bfec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfecc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1bfeccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bfed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bfed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bfed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfed8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFED8u;
    {
        const bool branch_taken_0x1bfed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFED8u;
            // 0x1bfedc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfed8) {
            ctx->pc = 0x1BFEE8u;
            goto label_1bfee8;
        }
    }
    ctx->pc = 0x1BFEE0u;
    // 0x1bfee0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFEE0u;
    {
        const bool branch_taken_0x1bfee0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bfee0) {
            ctx->pc = 0x1BFEF0u;
            goto label_1bfef0;
        }
    }
    ctx->pc = 0x1BFEE8u;
label_1bfee8:
    // 0x1bfee8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BFEE8u;
    {
        const bool branch_taken_0x1bfee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEE8u;
            // 0x1bfeec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfee8) {
            ctx->pc = 0x1BFF48u;
            goto label_1bff48;
        }
    }
    ctx->pc = 0x1BFEF0u;
label_1bfef0:
    // 0x1bfef0: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BFEF0u;
    SET_GPR_U32(ctx, 31, 0x1BFEF8u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEF8u; }
        if (ctx->pc != 0x1BFEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDA0_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEF8u; }
        if (ctx->pc != 0x1BFEF8u) { return; }
    }
    ctx->pc = 0x1BFEF8u;
label_1bfef8:
    // 0x1bfef8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bfef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bfefc: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x1bfefcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bff00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bff00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff04: 0x24a5b7e0  addiu       $a1, $a1, -0x4820
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948832));
    // 0x1bff08: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BFF08u;
    {
        const bool branch_taken_0x1bff08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF08u;
            // 0x1bff0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff08) {
            ctx->pc = 0x1BFF48u;
            goto label_1bff48;
        }
    }
    ctx->pc = 0x1BFF10u;
    // 0x1bff10: 0x26100015  addiu       $s0, $s0, 0x15
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x1bff14: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1BFF14u;
    SET_GPR_U32(ctx, 31, 0x1BFF1Cu);
    ctx->pc = 0x1BFF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF14u;
            // 0x1bff18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF1Cu; }
        if (ctx->pc != 0x1BFF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF1Cu; }
        if (ctx->pc != 0x1BFF1Cu) { return; }
    }
    ctx->pc = 0x1BFF1Cu;
label_1bff1c:
    // 0x1bff1c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bff20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff24: 0x24a5b7e8  addiu       $a1, $a1, -0x4818
    ctx->pc = 0x1bff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948840));
    // 0x1bff28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bff28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFF2Cu;
    {
        const bool branch_taken_0x1bff2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF2Cu;
            // 0x1bff30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff2c) {
            ctx->pc = 0x1BFF44u;
            goto label_1bff44;
        }
    }
    ctx->pc = 0x1BFF34u;
    // 0x1bff34: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1BFF34u;
    SET_GPR_U32(ctx, 31, 0x1BFF3Cu);
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF3Cu; }
        if (ctx->pc != 0x1BFF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF3Cu; }
        if (ctx->pc != 0x1BFF3Cu) { return; }
    }
    ctx->pc = 0x1BFF3Cu;
label_1bff3c:
    // 0x1bff3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bff40: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1bff40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1bff44:
    // 0x1bff44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bff44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bff48:
    // 0x1bff48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bff48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bff4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bff4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bff50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF50u;
            // 0x1bff54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFF58u;
    // 0x1bff58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bff5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1bff5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bff64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bff64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff68: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFF68u;
    {
        const bool branch_taken_0x1bff68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF68u;
            // 0x1bff6c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff68) {
            ctx->pc = 0x1BFF78u;
            goto label_1bff78;
        }
    }
    ctx->pc = 0x1BFF70u;
    // 0x1bff70: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFF70u;
    {
        const bool branch_taken_0x1bff70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bff70) {
            ctx->pc = 0x1BFF80u;
            goto label_1bff80;
        }
    }
    ctx->pc = 0x1BFF78u;
label_1bff78:
    // 0x1bff78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BFF78u;
    {
        const bool branch_taken_0x1bff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF78u;
            // 0x1bff7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff78) {
            ctx->pc = 0x1BFFB0u;
            goto label_1bffb0;
        }
    }
    ctx->pc = 0x1BFF80u;
label_1bff80:
    // 0x1bff80: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BFF80u;
    SET_GPR_U32(ctx, 31, 0x1BFF88u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF88u; }
        if (ctx->pc != 0x1BFF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDA0_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF88u; }
        if (ctx->pc != 0x1BFF88u) { return; }
    }
    ctx->pc = 0x1BFF88u;
label_1bff88:
    // 0x1bff88: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bff88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bff8c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x1bff8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bff90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bff90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff94: 0x26040016  addiu       $a0, $s0, 0x16
    ctx->pc = 0x1bff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x1bff98: 0x24a5b7b0  addiu       $a1, $a1, -0x4850
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948784));
    // 0x1bff9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFF9Cu;
    {
        const bool branch_taken_0x1bff9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF9Cu;
            // 0x1bffa0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff9c) {
            ctx->pc = 0x1BFFB0u;
            goto label_1bffb0;
        }
    }
    ctx->pc = 0x1BFFA4u;
    // 0x1bffa4: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1BFFA4u;
    SET_GPR_U32(ctx, 31, 0x1BFFACu);
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFACu; }
        if (ctx->pc != 0x1BFFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFACu; }
        if (ctx->pc != 0x1BFFACu) { return; }
    }
    ctx->pc = 0x1BFFACu;
label_1bffac:
    // 0x1bffac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bffacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bffb0:
    // 0x1bffb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bffb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bffb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFB8u;
            // 0x1bffbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFFC0u;
    // 0x1bffc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bffc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bffc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bffc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bffd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bffd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffd4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFFD4u;
    {
        const bool branch_taken_0x1bffd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFD4u;
            // 0x1bffd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffd4) {
            ctx->pc = 0x1BFFE4u;
            goto label_1bffe4;
        }
    }
    ctx->pc = 0x1BFFDCu;
    // 0x1bffdc: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFFDCu;
    {
        const bool branch_taken_0x1bffdc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1bffdc) {
            ctx->pc = 0x1BFFF0u;
            goto label_1bfff0;
        }
    }
    ctx->pc = 0x1BFFE4u;
label_1bffe4:
    // 0x1bffe4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BFFE4u;
    {
        const bool branch_taken_0x1bffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFE4u;
            // 0x1bffe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffe4) {
            ctx->pc = 0x1C0028u;
            goto label_1c0028;
        }
    }
    ctx->pc = 0x1BFFECu;
    // 0x1bffec: 0x0  nop
    ctx->pc = 0x1bffecu;
    // NOP
label_1bfff0:
    // 0x1bfff0: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BFFF0u;
    SET_GPR_U32(ctx, 31, 0x1BFFF8u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFF8u; }
        if (ctx->pc != 0x1BFFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDA0_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFF8u; }
        if (ctx->pc != 0x1BFFF8u) { return; }
    }
    ctx->pc = 0x1BFFF8u;
label_1bfff8:
    // 0x1bfff8: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1bfff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bfffc: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x1bfffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0008: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0008u;
    {
        const bool branch_taken_0x1c0008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0008u;
            // 0x1c000c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0008) {
            ctx->pc = 0x1C0028u;
            goto label_1c0028;
        }
    }
    ctx->pc = 0x1C0010u;
    // 0x1c0010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c001c: 0x8070070  j           func_1C01C0
    ctx->pc = 0x1C001Cu;
    ctx->pc = 0x1C0020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C001Cu;
            // 0x1c0020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C01C0u;
    goto label_1c01c0;
    ctx->pc = 0x1C0024u;
    // 0x1c0024: 0x0  nop
    ctx->pc = 0x1c0024u;
    // NOP
label_1c0028:
    // 0x1c0028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c002c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c002cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0034: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0034u;
            // 0x1c0038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C003Cu;
    // 0x1c003c: 0x0  nop
    ctx->pc = 0x1c003cu;
    // NOP
    // 0x1c0040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c004c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0050: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0054: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0054u;
    {
        const bool branch_taken_0x1c0054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0054u;
            // 0x1c0058: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0054) {
            ctx->pc = 0x1C0064u;
            goto label_1c0064;
        }
    }
    ctx->pc = 0x1C005Cu;
    // 0x1c005c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C005Cu;
    {
        const bool branch_taken_0x1c005c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1c005c) {
            ctx->pc = 0x1C0070u;
            goto label_1c0070;
        }
    }
    ctx->pc = 0x1C0064u;
label_1c0064:
    // 0x1c0064: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0064u;
    {
        const bool branch_taken_0x1c0064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0064u;
            // 0x1c0068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0064) {
            ctx->pc = 0x1C00A8u;
            goto label_1c00a8;
        }
    }
    ctx->pc = 0x1C006Cu;
    // 0x1c006c: 0x0  nop
    ctx->pc = 0x1c006cu;
    // NOP
label_1c0070:
    // 0x1c0070: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1C0070u;
    SET_GPR_U32(ctx, 31, 0x1C0078u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0078u; }
        if (ctx->pc != 0x1C0078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDA0_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0078u; }
        if (ctx->pc != 0x1C0078u) { return; }
    }
    ctx->pc = 0x1C0078u;
label_1c0078:
    // 0x1c0078: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1c0078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c007c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x1c007cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0088: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0088u;
    {
        const bool branch_taken_0x1c0088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0088u;
            // 0x1c008c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0088) {
            ctx->pc = 0x1C00A8u;
            goto label_1c00a8;
        }
    }
    ctx->pc = 0x1C0090u;
    // 0x1c0090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c009c: 0x8070070  j           func_1C01C0
    ctx->pc = 0x1C009Cu;
    ctx->pc = 0x1C00A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C009Cu;
            // 0x1c00a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C01C0u;
    goto label_1c01c0;
    ctx->pc = 0x1C00A4u;
    // 0x1c00a4: 0x0  nop
    ctx->pc = 0x1c00a4u;
    // NOP
label_1c00a8:
    // 0x1c00a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c00acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c00b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00B4u;
            // 0x1c00b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C00BCu;
    // 0x1c00bc: 0x0  nop
    ctx->pc = 0x1c00bcu;
    // NOP
    // 0x1c00c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c00c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c00c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c00c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c00ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c00d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c00d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00d4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C00D4u;
    {
        const bool branch_taken_0x1c00d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00D4u;
            // 0x1c00d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00d4) {
            ctx->pc = 0x1C00E4u;
            goto label_1c00e4;
        }
    }
    ctx->pc = 0x1C00DCu;
    // 0x1c00dc: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C00DCu;
    {
        const bool branch_taken_0x1c00dc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1c00dc) {
            ctx->pc = 0x1C00F0u;
            goto label_1c00f0;
        }
    }
    ctx->pc = 0x1C00E4u;
label_1c00e4:
    // 0x1c00e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C00E4u;
    {
        const bool branch_taken_0x1c00e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00E4u;
            // 0x1c00e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e4) {
            ctx->pc = 0x1C0128u;
            goto label_1c0128;
        }
    }
    ctx->pc = 0x1C00ECu;
    // 0x1c00ec: 0x0  nop
    ctx->pc = 0x1c00ecu;
    // NOP
label_1c00f0:
    // 0x1c00f0: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1C00F0u;
    SET_GPR_U32(ctx, 31, 0x1C00F8u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00F8u; }
        if (ctx->pc != 0x1C00F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDA0_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00F8u; }
        if (ctx->pc != 0x1C00F8u) { return; }
    }
    ctx->pc = 0x1C00F8u;
label_1c00f8:
    // 0x1c00f8: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1c00f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c00fc: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x1c00fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0108: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0108u;
    {
        const bool branch_taken_0x1c0108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0108u;
            // 0x1c010c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0108) {
            ctx->pc = 0x1C0128u;
            goto label_1c0128;
        }
    }
    ctx->pc = 0x1C0110u;
    // 0x1c0110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c011c: 0x8070070  j           func_1C01C0
    ctx->pc = 0x1C011Cu;
    ctx->pc = 0x1C0120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C011Cu;
            // 0x1c0120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C01C0u;
    goto label_1c01c0;
    ctx->pc = 0x1C0124u;
    // 0x1c0124: 0x0  nop
    ctx->pc = 0x1c0124u;
    // NOP
label_1c0128:
    // 0x1c0128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c012c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c012cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0134: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0134u;
            // 0x1c0138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C013Cu;
    // 0x1c013c: 0x0  nop
    ctx->pc = 0x1c013cu;
    // NOP
    // 0x1c0140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c014c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0150: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0154: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0154u;
    {
        const bool branch_taken_0x1c0154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0154u;
            // 0x1c0158: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0154) {
            ctx->pc = 0x1C0164u;
            goto label_1c0164;
        }
    }
    ctx->pc = 0x1C015Cu;
    // 0x1c015c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C015Cu;
    {
        const bool branch_taken_0x1c015c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1c015c) {
            ctx->pc = 0x1C0170u;
            goto label_1c0170;
        }
    }
    ctx->pc = 0x1C0164u;
label_1c0164:
    // 0x1c0164: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0164u;
    {
        const bool branch_taken_0x1c0164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0164u;
            // 0x1c0168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0164) {
            ctx->pc = 0x1C01A8u;
            goto label_1c01a8;
        }
    }
    ctx->pc = 0x1C016Cu;
    // 0x1c016c: 0x0  nop
    ctx->pc = 0x1c016cu;
    // NOP
label_1c0170:
    // 0x1c0170: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1C0170u;
    SET_GPR_U32(ctx, 31, 0x1C0178u);
    ctx->pc = 0x1BFDA0u;
    if (runtime->hasFunction(0x1BFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0178u; }
        if (ctx->pc != 0x1C0178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDA0_0x1bfda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0178u; }
        if (ctx->pc != 0x1C0178u) { return; }
    }
    ctx->pc = 0x1C0178u;
label_1c0178:
    // 0x1c0178: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1c0178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c017c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x1c017cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0188: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0188u;
    {
        const bool branch_taken_0x1c0188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0188u;
            // 0x1c018c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0188) {
            ctx->pc = 0x1C01A8u;
            goto label_1c01a8;
        }
    }
    ctx->pc = 0x1C0190u;
    // 0x1c0190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c019c: 0x8070070  j           func_1C01C0
    ctx->pc = 0x1C019Cu;
    ctx->pc = 0x1C01A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C019Cu;
            // 0x1c01a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C01C0u;
    goto label_1c01c0;
    ctx->pc = 0x1C01A4u;
    // 0x1c01a4: 0x0  nop
    ctx->pc = 0x1c01a4u;
    // NOP
label_1c01a8:
    // 0x1c01a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c01acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c01b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c01b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C01B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C01B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01B4u;
            // 0x1c01b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C01BCu;
    // 0x1c01bc: 0x0  nop
    ctx->pc = 0x1c01bcu;
    // NOP
label_1c01c0:
    // 0x1c01c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c01c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C01C4u;
    {
        const bool branch_taken_0x1c01c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01C4u;
            // 0x1c01c8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c4) {
            ctx->pc = 0x1C01D4u;
            goto label_1c01d4;
        }
    }
    ctx->pc = 0x1C01CCu;
    // 0x1c01cc: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C01CCu;
    {
        const bool branch_taken_0x1c01cc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1c01cc) {
            ctx->pc = 0x1C01D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01CCu;
            // 0x1c01d0: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C01E0u;
            goto label_1c01e0;
        }
    }
    ctx->pc = 0x1C01D4u;
label_1c01d4:
    // 0x1c01d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C01D4u;
    {
        const bool branch_taken_0x1c01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01D4u;
            // 0x1c01d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01d4) {
            ctx->pc = 0x1C0210u;
            goto label_1c0210;
        }
    }
    ctx->pc = 0x1C01DCu;
    // 0x1c01dc: 0x0  nop
    ctx->pc = 0x1c01dcu;
    // NOP
label_1c01e0:
    // 0x1c01e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c01e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1c01e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c01e8: 0x80470001  lb          $a3, 0x1($v0)
    ctx->pc = 0x1c01e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1c01ec: 0x80480002  lb          $t0, 0x2($v0)
    ctx->pc = 0x1c01ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1c01f0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1c01f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c01f4: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x1c01f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c01f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c01f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c01fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c01fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0200: 0xc070088  jal         func_1C0220
    ctx->pc = 0x1C0200u;
    SET_GPR_U32(ctx, 31, 0x1C0208u);
    ctx->pc = 0x1C0204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0200u;
            // 0x1c0204: 0xa3a80002  sb          $t0, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0220u;
    if (runtime->hasFunction(0x1C0220u)) {
        auto targetFn = runtime->lookupFunction(0x1C0220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0208u; }
        if (ctx->pc != 0x1C0208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0220_0x1c0220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0208u; }
        if (ctx->pc != 0x1C0208u) { return; }
    }
    ctx->pc = 0x1C0208u;
label_1c0208:
    // 0x1c0208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c020c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c020cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c0210:
    // 0x1c0210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0214: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0214u;
            // 0x1c0218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C021Cu;
    // 0x1c021c: 0x0  nop
    ctx->pc = 0x1c021cu;
    // NOP
}
