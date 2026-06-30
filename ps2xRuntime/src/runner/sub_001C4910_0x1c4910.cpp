#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4910
// Address: 0x1c4910 - 0x1c4a28
void sub_001C4910_0x1c4910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4910_0x1c4910");
#endif

    switch (ctx->pc) {
        case 0x1c492cu: goto label_1c492c;
        case 0x1c4940u: goto label_1c4940;
        case 0x1c49c8u: goto label_1c49c8;
        default: break;
    }

    ctx->pc = 0x1c4910u;

    // 0x1c4910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c491c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C491Cu;
    {
        const bool branch_taken_0x1c491c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C491Cu;
            // 0x1c4920: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c491c) {
            ctx->pc = 0x1C4968u;
            goto label_1c4968;
        }
    }
    ctx->pc = 0x1C4924u;
    // 0x1c4924: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1C4924u;
    SET_GPR_U32(ctx, 31, 0x1C492Cu);
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C492Cu; }
        if (ctx->pc != 0x1C492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C492Cu; }
        if (ctx->pc != 0x1C492Cu) { return; }
    }
    ctx->pc = 0x1C492Cu;
label_1c492c:
    // 0x1c492c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4930: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4930u;
    {
        const bool branch_taken_0x1c4930 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C4934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4930u;
            // 0x1c4934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4930) {
            ctx->pc = 0x1C4968u;
            goto label_1c4968;
        }
    }
    ctx->pc = 0x1C4938u;
    // 0x1c4938: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c4938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c493c: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x1c493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1c4940:
    // 0x1c4940: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c4940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c4944: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c4944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4948: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x1c4948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1c494c: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x1c494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x1c4950: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1c4950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1c4954: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4954u;
    {
        const bool branch_taken_0x1c4954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4954u;
            // 0x1c4958: 0xc7282a  slt         $a1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4954) {
            ctx->pc = 0x1C4960u;
            goto label_1c4960;
        }
    }
    ctx->pc = 0x1C495Cu;
    // 0x1c495c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c495cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c4960:
    // 0x1c4960: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C4960u;
    {
        const bool branch_taken_0x1c4960 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4960u;
            // 0x1c4964: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4960) {
            ctx->pc = 0x1C4940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4940;
        }
    }
    ctx->pc = 0x1C4968u;
label_1c4968:
    // 0x1c4968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c496c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c496cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4970: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4970u;
            // 0x1c4974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4978u;
    // 0x1c4978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c497c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4980: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c4980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4984: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c4984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4988: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4988u;
    {
        const bool branch_taken_0x1c4988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C498Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4988u;
            // 0x1c498c: 0x2405088e  addiu       $a1, $zero, 0x88E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4988) {
            ctx->pc = 0x1C4998u;
            goto label_1c4998;
        }
    }
    ctx->pc = 0x1C4990u;
    // 0x1c4990: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4990u;
    {
        const bool branch_taken_0x1c4990 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4990) {
            ctx->pc = 0x1C49C0u;
            goto label_1c49c0;
        }
    }
    ctx->pc = 0x1C4998u;
label_1c4998:
    // 0x1c4998: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c499c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c49a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c49a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49a4: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c49a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c49a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c49ac: 0x24c6be20  addiu       $a2, $a2, -0x41E0
    ctx->pc = 0x1c49acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950432));
    // 0x1c49b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c49b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49b4: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c49b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c49b8: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C49B8u;
    ctx->pc = 0x1C49BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49B8u;
            // 0x1c49bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C49C0u;
label_1c49c0:
    // 0x1c49c0: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C49C0u;
    SET_GPR_U32(ctx, 31, 0x1C49C8u);
    ctx->pc = 0x1C49C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49C0u;
            // 0x1c49c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C49C8u; }
        if (ctx->pc != 0x1C49C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C49C8u; }
        if (ctx->pc != 0x1C49C8u) { return; }
    }
    ctx->pc = 0x1C49C8u;
label_1c49c8:
    // 0x1c49c8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c49cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c49ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c49d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49d4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c49d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c49d8: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c49dc: 0x24c6be20  addiu       $a2, $a2, -0x41E0
    ctx->pc = 0x1c49dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950432));
    // 0x1c49e0: 0x24050893  addiu       $a1, $zero, 0x893
    ctx->pc = 0x1c49e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
    // 0x1c49e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c49e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C49E8u;
    {
        const bool branch_taken_0x1c49e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49E8u;
            // 0x1c49ec: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49e8) {
            ctx->pc = 0x1C4A00u;
            goto label_1c4a00;
        }
    }
    ctx->pc = 0x1C49F0u;
    // 0x1c49f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c49f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c49f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c49f8: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C49F8u;
    ctx->pc = 0x1C49FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49F8u;
            // 0x1c49fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4A00u;
label_1c4a00:
    // 0x1c4a00: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1c4a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4a08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c4a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A0Cu;
            // 0x1c4a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4A14u;
    // 0x1c4a14: 0x0  nop
    ctx->pc = 0x1c4a14u;
    // NOP
    // 0x1c4a18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c4a1c: 0x8c43a4d8  lw          $v1, -0x5B28($v0)
    ctx->pc = 0x1c4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c4a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A20u;
            // 0x1c4a24: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4A28u;
}
