#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4978
// Address: 0x1b4978 - 0x1b4a20
void sub_001B4978_0x1b4978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4978_0x1b4978");
#endif

    switch (ctx->pc) {
        case 0x1b4994u: goto label_1b4994;
        case 0x1b49c4u: goto label_1b49c4;
        default: break;
    }

    ctx->pc = 0x1b4978u;

    // 0x1b4978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b497c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b498c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B498Cu;
    SET_GPR_U32(ctx, 31, 0x1B4994u);
    ctx->pc = 0x1B4990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B498Cu;
            // 0x1b4990: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4994u; }
        if (ctx->pc != 0x1B4994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4994u; }
        if (ctx->pc != 0x1B4994u) { return; }
    }
    ctx->pc = 0x1B4994u;
label_1b4994:
    // 0x1b4994: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4998u;
    {
        const bool branch_taken_0x1b4998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4998u;
            // 0x1b499c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4998) {
            ctx->pc = 0x1B49B8u;
            goto label_1b49b8;
        }
    }
    ctx->pc = 0x1B49A0u;
    // 0x1b49a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b49a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b49a4: 0x34a50137  ori         $a1, $a1, 0x137
    ctx->pc = 0x1b49a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)311);
    // 0x1b49a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b49a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b49ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b49acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b49b0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B49B0u;
    ctx->pc = 0x1B49B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49B0u;
            // 0x1b49b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B49B8u;
label_1b49b8:
    // 0x1b49b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b49b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49bc: 0xc06d288  jal         func_1B4A20
    ctx->pc = 0x1B49BCu;
    SET_GPR_U32(ctx, 31, 0x1B49C4u);
    ctx->pc = 0x1B49C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49BCu;
            // 0x1b49c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A20u;
    if (runtime->hasFunction(0x1B4A20u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49C4u; }
        if (ctx->pc != 0x1B49C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A20_0x1b4a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B49C4u; }
        if (ctx->pc != 0x1B49C4u) { return; }
    }
    ctx->pc = 0x1B49C4u;
label_1b49c4:
    // 0x1b49c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b49c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b49c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b49ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b49d0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1b49d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b49d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B49D4u;
    {
        const bool branch_taken_0x1b49d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B49D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49D4u;
            // 0x1b49d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49d4) {
            ctx->pc = 0x1B4A08u;
            goto label_1b4a08;
        }
    }
    ctx->pc = 0x1B49DCu;
    // 0x1b49dc: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1b49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x1b49e0: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1b49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1b49e4: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x1b49e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b49e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b49e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b49ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B49ECu;
    {
        const bool branch_taken_0x1b49ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b49ec) {
            ctx->pc = 0x1B49F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B49ECu;
            // 0x1b49f0: 0xae09096c  sw          $t1, 0x96C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2412), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B49F4u;
            goto label_1b49f4;
        }
    }
    ctx->pc = 0x1B49F4u;
label_1b49f4:
    // 0x1b49f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b49f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b49f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b49f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b49fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b49fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a00: 0x806e35c  j           func_1B8D70
    ctx->pc = 0x1B4A00u;
    ctx->pc = 0x1B4A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A00u;
            // 0x1b4a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4A08u;
label_1b4a08:
    // 0x1b4a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A14u;
            // 0x1b4a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4A1Cu;
    // 0x1b4a1c: 0x0  nop
    ctx->pc = 0x1b4a1cu;
    // NOP
}
