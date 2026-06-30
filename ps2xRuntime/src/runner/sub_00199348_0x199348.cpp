#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199348
// Address: 0x199348 - 0x199408
void sub_00199348_0x199348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199348_0x199348");
#endif

    switch (ctx->pc) {
        case 0x1993e4u: goto label_1993e4;
        default: break;
    }

    ctx->pc = 0x199348u;

    // 0x199348: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19934c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19934Cu;
    {
        const bool branch_taken_0x19934c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x199350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19934Cu;
            // 0x199350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19934c) {
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x199354u;
    // 0x199354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x199354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199358: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x199358u;
    {
        const bool branch_taken_0x199358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x199358) {
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x199360u;
    // 0x199360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199364: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x199364u;
    {
        const bool branch_taken_0x199364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x199364) {
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x19936Cu;
    // 0x19936c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x19936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x199370: 0x24022ee0  addiu       $v0, $zero, 0x2EE0
    ctx->pc = 0x199370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
    // 0x199374: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x199374u;
    {
        const bool branch_taken_0x199374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199374u;
            // 0x199378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199374) {
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x19937Cu;
    // 0x19937c: 0x28822ee1  slti        $v0, $a0, 0x2EE1
    ctx->pc = 0x19937cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12001) ? 1 : 0);
    // 0x199380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199380u;
    {
        const bool branch_taken_0x199380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199380u;
            // 0x199384: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199380) {
            ctx->pc = 0x199398u;
            goto label_199398;
        }
    }
    ctx->pc = 0x199388u;
    // 0x199388: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x199388u;
    {
        const bool branch_taken_0x199388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199388) {
            ctx->pc = 0x19938Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199388u;
            // 0x19938c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x199390u;
    // 0x199390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199390u;
    {
        const bool branch_taken_0x199390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199390u;
            // 0x199394: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199390) {
            ctx->pc = 0x1993A4u;
            goto label_1993a4;
        }
    }
    ctx->pc = 0x199398u;
label_199398:
    // 0x199398: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199398u;
    {
        const bool branch_taken_0x199398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199398u;
            // 0x19939c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199398) {
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x1993A0u;
    // 0x1993a0: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x1993a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_1993a4:
    // 0x1993a4: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1993A4u;
    {
        const bool branch_taken_0x1993a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1993a4) {
            ctx->pc = 0x1993A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1993A4u;
            // 0x1993a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1993B8u;
            goto label_1993b8;
        }
    }
    ctx->pc = 0x1993ACu;
    // 0x1993ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1993ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1993B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1993ACu;
            // 0x1993b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1993B4u;
    // 0x1993b4: 0x0  nop
    ctx->pc = 0x1993b4u;
    // NOP
label_1993b8:
    // 0x1993b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1993B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1993C0u;
    // 0x1993c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1993c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1993c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1993c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1993c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1993ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1993d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1993d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1993d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1993d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1993d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1993dc: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1993DCu;
    SET_GPR_U32(ctx, 31, 0x1993E4u);
    ctx->pc = 0x1993E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993DCu;
            // 0x1993e0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993E4u; }
        if (ctx->pc != 0x1993E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993E4u; }
        if (ctx->pc != 0x1993E4u) { return; }
    }
    ctx->pc = 0x1993E4u;
label_1993e4:
    // 0x1993e4: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x1993e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x1993e8: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x1993e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
    // 0x1993ec: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x1993ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x1993f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1993f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1993f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1993f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1993f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1993f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1993fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1993fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199400: 0x3e00008  jr          $ra
    ctx->pc = 0x199400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199400u;
            // 0x199404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199408u;
}
